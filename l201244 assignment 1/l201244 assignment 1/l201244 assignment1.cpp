#include<iostream>
using namespace std;

class terms
{
private:
    int coeff;
    int exp;
    terms* next;

public:
    terms()
    {
        //default constructor
        next = nullptr;
        coeff = 0;
        exp = 0;
    }
    ////////////////////////////////////////
    terms(int coeff, int exp)
    {
        //overloaded constructor
        this->coeff = coeff;
        this->exp = exp;
        next = 0;
    }
    /////////////////////////////////////////

    ~terms()
    {
        //Destructor
        next = nullptr;
    }
    /////////////////////////////////////////

    friend class polynomial;
};

class polynomial
{
private:
    terms* head;
    int size;
public:
    polynomial()
    {
        //default constructor
        head = 0;
        size = 0;
    }
    ////////////////////////////////////////

    void addterm(int con, int power)           //helper function 
    {
        if (head == nullptr)
        {
           head = new terms(con, power);       //first term will be added from start
           head->next = nullptr;
        }
        else
        {
            terms* temp = head;     //all other terms from the end
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new terms(con, power); //constructor overloaded
            temp->next->next=nullptr;
        }
    }
    /////////////////////////////////////////

    polynomial(polynomial& p1)      //copy constructor
    {
       terms* temp;
       for (temp = p1.head; temp != nullptr; temp = temp->next)
       {
        	addterm(temp->coeff, temp->exp);
       }
  	}
    /////////////////////////////////////////

    void input()        //input function
    {
        int tmp_coeff,tmp_exp;
        cout << "Please enter the number of terms in your polinomial: ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "enter coeff: "; 
            cin >> tmp_coeff;
            cout << "enter exponent: ";
            cin >> tmp_exp;
            addterm(tmp_coeff,tmp_exp);
        }
        sort();     //function for sorting
        simplify();     //function for simplification
    }
    /////////////////////////////////////////

    void simplify()
    {
        terms* ptr = 0;
        terms* tmpp = head;
        while (tmpp->next != nullptr)
        {
            if (tmpp->exp == tmpp->next->exp)
            {
                tmpp->coeff = tmpp->coeff + tmpp->next->coeff;
                ptr = tmpp->next->next;
                delete tmpp->next;
                tmpp->next = ptr;
            }
            else
            {
                tmpp = tmpp->next;
            }   
        } 
    }
    /////////////////////////////////////////

    void sort()
    {
        terms* tmp1=head;
        terms* tmp2= head;
        for (tmp1 = head; tmp1 != nullptr; tmp1 = tmp1->next)
        {
            for (tmp2 = head; tmp2 != nullptr; tmp2 = tmp2->next)
            {
                if (tmp2->exp < tmp1->exp)
                {
                    int co, ex;
                    co = tmp2->coeff;
                    ex = tmp2->exp;
                    tmp2->coeff = tmp1->coeff;
                    tmp2->exp = tmp1->exp;
                    tmp1->coeff = co;
                    tmp1->exp = ex;
                }
            }
        }
    }
    /////////////////////////////////////////

    void output()
    {
        terms* tmp1 = head;
        if (tmp1 == nullptr)
        {
            cout << "List empty" << endl;
            return;
        }
        else
        { 
        
            while (tmp1 != nullptr)
            {
                if (tmp1->coeff > 0 && tmp1->exp == 0)
                {
                    cout << tmp1->coeff << " ";
                }
                else if (tmp1->coeff >0 && tmp1->exp == 1)
                {
                    cout << tmp1->coeff << " n " << " ";
                }
                else
                {
                    cout << tmp1->coeff << "n^" << tmp1->exp << " ";
                }
                
                tmp1 = tmp1->next;
            }
            cout << endl;
        }
    }
    /////////////////////////////////////////

    polynomial* add (polynomial* p1)
    {
        polynomial* resptr = new polynomial();
        terms* ptr1 = p1->head;
        terms* ptr2 = this->head;

        while (ptr1 != nullptr && ptr2 != nullptr)
        {
                if (ptr1 == nullptr)
                {
                    resptr->addterm(ptr2->coeff, ptr2->exp);
                    ptr2 = ptr2->next;
                }
                else if (ptr2 == nullptr)
                {
                    resptr->addterm(ptr1->coeff, ptr1->exp);
                    ptr1 = ptr1->next;
                }
                else if (ptr1->exp > ptr2->exp)
                {
                    resptr->addterm(ptr1->coeff, ptr1->exp);
                    ptr1 = ptr1->next;
                }
                else if (ptr2->exp < ptr1->exp)
                {
                    resptr->addterm(ptr2->coeff, ptr2->exp);
                    ptr2 = ptr2->next;
                }
                else
                {
                    resptr->addterm(ptr1->coeff + ptr2->coeff, ptr1->exp);
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
        }
        resptr->sort();
        resptr->simplify();
        return resptr;
    }
    ///////////////////////////////////////////////////////////////////
    polynomial* multiply (polynomial* poly1)
    {
        int coeff;
        int exp;
        polynomial *mul = new polynomial();

        terms* temp0 = mul->head;
        terms* temp1 = poly1->head;
        terms* temp2 = this->head;

        terms* p_term = 0;

        for (temp1 = poly1->head; temp1 != nullptr; temp1 = temp1->next)
        {
            for (temp2 = this->head; temp2 !=  nullptr; temp2 = temp2->next)
            {
                mul->addterm(temp1->coeff * temp2->coeff, temp1->exp + temp2->exp);                
            }
        }
        mul->sort();
        mul->simplify();
        return mul;
    }
    /////////////////////////////////////////////////////////////////////////////////////

    int eval(const int x)
    {
        terms* tempp = this->head;
        int result = 0;
        while (tempp != nullptr)
        {
        	result = result + (pow(x, tempp->exp) * tempp->coeff);
        	tempp = tempp->next;
        }
        output();
       	return result;
    }
    /////////////////////////////////////////
    ~polynomial()
    {
        //destructor
        if (head->next != nullptr)
        {
            terms* t = head->next;
            while (t != nullptr)
            {
                head->next = t->next;
                delete t;
                t = head->next;
            }
        }
    }
    ///////////////////////////////////////////////

};
int main()
{
    cout << "THE FOLLOWING PROGRAM IS A SMALL CALCULATOR WHICH WILL BE USED FOR " << endl;
    cout << "SOLVING POLYNOMIALS..!\n\n" << endl;
    cout << "*******************************************************************************" << endl;
    int coff = 0, exp = 0, count = 0;
    polynomial* poly1 = new polynomial();
    polynomial* poly2 = new polynomial();
    poly1->input();
    poly2->input();

    poly1->output();
    poly2->output();
    cout << endl << endl;
    cout << "*******************************************************************************" << endl;
    //////////////////////////////////////////////////////////


    int choice;
start: cout << "Enter 1) for addition of polynomials..!" << endl;
    cout << "Enter 2 for multiplication of polynomials..!" << endl;
    cout << "Enter 3 for evaluation of polynomials..!" << endl;
    cout << "Enter 4 for end the program...!" << endl;
    cin >> choice;
    if (choice == 1)
    {
        polynomial* poly3 = new polynomial();
        poly3 = poly1->add(poly2);
        poly3->output();
        cout << "*******************************************************************************" << endl;
    }
    else if (choice == 2)
    {
        polynomial* poly4 = new polynomial();
        poly4 = poly1->multiply(poly2);
        poly4->output();
    }
    else if (choice == 3)
    {
        int ch;
        cout << "enter the value of variable for evaluation: ";
        cin >> ch;
        cout << "for first polynomial, answer is :" << poly1->eval(ch) << endl;
        cout << "for second polynomial, answer is: " << poly2->eval(ch) << endl;
        cout << "*******************************************************************************" << endl;
    }
    else if (choice == 4)
    {
        return 0;
    }
    else
    {
        cout << "wrong choice..! plz try again and input correct choice" << endl;
        goto start;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////

    int c;
    cout << "Do you want to continue? (0 for no and 1 for yes) " << endl;
    cin >> c;
    if (c == 1)
    {
        goto start;
    }

    system("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////