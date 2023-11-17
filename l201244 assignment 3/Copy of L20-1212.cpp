#include <iostream>
#include<string>
constexpr auto SPACE = 10;
using namespace std;
class PatientRecord
{
public:
	PatientRecord()
	{
		patient_id = 0;
		patient_name = '\0';
		admission_date = '\0';
		disease_diagnosis = '\0';
		status = '\0';
	}
	PatientRecord(int patientid,string patientname, string admissiondate,string diseasediagnosis,string Status)
	{
		patient_id = patientid;
		patient_name = patientname;
		admission_date = admissiondate;
		disease_diagnosis = diseasediagnosis;
		status = Status;
	}
	PatientRecord(PatientRecord & obj)
	{
		patient_id = obj.patient_id;
		patient_name = obj.patient_name;
		admission_date = obj.admission_date;
		disease_diagnosis = obj.disease_diagnosis;
		status = obj.status;
	}
	void operator = (PatientRecord& obj)
	{
		patient_id = obj.patient_id;
		patient_name = obj.patient_name;
		admission_date = obj.admission_date;
		disease_diagnosis = obj.disease_diagnosis;
		status = obj.status;
	}
	friend ostream& operator<<(ostream& output, const PatientRecord& OBJ)
	{
		output << "Patient ID        :" << OBJ.patient_id << endl;
		output << "Patient Name      :" << OBJ.patient_name << endl;
		output << "Admission Date    :" << OBJ.admission_date << endl;
		output << "Disease Diagnosis :" << OBJ.disease_diagnosis << endl;
		output << "Status            :" << OBJ.status << endl;
		return output;
	}
	friend class HospitalData;
	friend class TNode;
private:
	int patient_id;
	string patient_name;
	string admission_date;
	string disease_diagnosis;
	string status;
};
class TNode
{
public:
	TNode()
	{
		left_child = NULL;
		right_child = NULL;
	}
	TNode(PatientRecord obj, TNode* leftchild, TNode* rightchild)
	{
		Patient_record = obj;
		left_child = leftchild;
		right_child = rightchild;
	}
	
	~TNode()
	{
		left_child = NULL;
		delete left_child;
		right_child = NULL;
		delete right_child;
	}
	friend class HospitalData;
private:
	PatientRecord Patient_record;
	TNode* left_child;
	TNode* right_child;
};
class HospitalData
{
public:
	HospitalData()
	{
		root = NULL;
		size = 0;
	}
	bool isEmpty()
	{
		if (root == NULL)
		{
			return true;
		}
		return false;
	}
	TNode* RigthRotations(TNode*& x)
	{
		TNode* orphan = x->left_child->right_child;
		TNode* y = x->left_child;
		y->right_child = x;
		x->left_child = orphan;
		return y;
	}
	TNode* LeftRotations(TNode*& x)
	{
		TNode* orphan = x->right_child->left_child;
		TNode* y = x->right_child;
		y->left_child = x;
		x->right_child = orphan;
		return y;
	}
	void insertRec(PatientRecord obj)
	{
		insertRec(obj, root);
		//SearchITR(obj);
	}
	void insertRec(PatientRecord obj, TNode*& current)
	{
		//Node<k,v> * current=root;

		if (current == nullptr)
		{
			current = new  TNode(obj, NULL, NULL);
		
		}
		else if (current->Patient_record.patient_id < obj.patient_id)
			insertRec(obj, current->right_child);

		else if (current->Patient_record.patient_id > obj.patient_id)
			insertRec(obj, current->left_child);
		

	}
	void Insert(PatientRecord obj)
	{
		TNode* temp = root;
		root = NULL;
		root = new TNode(obj, NULL, NULL);
		preorderinsert(temp);
		size++;
	}
	void Remove(PatientRecord obj)
	{
		deleteNode(root, obj);

	}
	TNode* deleteNode(TNode*& current, PatientRecord obj)
	{
		if (isEmpty())
		{
			return current;
		}
		else if (current->Patient_record.patient_id < obj.patient_id)
		{
			current->right_child = deleteNode(current->right_child, obj);
		}
		else if (current->Patient_record.patient_id > obj.patient_id)
		{
			current->left_child = deleteNode(current->left_child, obj);
		}
		else
		{
			if (current->left_child == NULL)
			{
				TNode* temp1 = current->right_child;
				delete current;
				return temp1;
			}
			else if (current->right_child == NULL)
			{
				TNode* temp1 = current->left_child;
				delete current;
				return temp1;
			}
			else
			{
				TNode* temp1 = minvalue(current->right_child);
				current->Patient_record = temp1->Patient_record;
				current->right_child = deleteNode(current->right_child, temp1->Patient_record);
			}
		}
		return current;
	}
	TNode* minvalue(TNode* temp)
	{
		TNode* current = temp;
		while (current->left_child != NULL)
		{
			current = current->left_child;
		}
		return current;
	}
	void visit(TNode* T)
	{
		cout << T->Patient_record<<endl;
	}
	void Print(int id)
	{
		preorder(root,id);
		cout << endl;
	}
	void preorder(TNode* T,int id)
	{
		if (T != NULL)
		{
			if (T->Patient_record.patient_id == id)
			{
				visit(T);
				return;
			}
			preorder(T->left_child,id);
			preorder(T->right_child,id);
		}

	}
	void preorderinsert(TNode* T)
	{
		if (T != NULL)
		{
			insertRec(T->Patient_record);
			preorderinsert(T->left_child);
			preorderinsert(T->right_child);
		}

	}
	/*void preordersplit1(TNode* T , int Median)
	{
		if (T != NULL)
		{
			if (T->Patient_record.patient_id < Median)
			{
				insertRec(T->Patient_record);
				preorderinsert(T->left_child);
				preorderinsert(T->right_child);
			}
			
		}

	}
	void preordersplit2(TNode* T, int Median)
	{
		if (T != NULL)
		{
			if (T->Patient_record.patient_id > Median)
			{
				insertRec(T->Patient_record);
				preorderinsert(T->left_child);
				preorderinsert(T->right_child);
			}

		}

	}*/
	void PrintAdmitted()
	{
		inorderAdmitted(root);
		cout << endl;
	}
	void inorderAdmitted(TNode* T)
	{
		if (T != NULL)
		{

			inorderAdmitted(T->left_child);
			if (T->Patient_record.status == "admitted")
			{
				visit(T);
			}
			inorderAdmitted(T->right_child);

		}

	}
	void Print2d()
	{
		cout << "2D Printing :)" << endl;
		print2D(root, 5);
	}
	void print2D(TNode* r, int space) {
		if (r == NULL) // Base case  1
			return;
		space += SPACE; // Increase distance between levels   2
		print2D(r->right_child, space); // Process right child first 3 
		cout << endl;
		for (int i = SPACE; i < space; i++) // 5 
			cout << " "; // 5.1  
		cout << r->Patient_record.patient_id << "\n"; // 6
		print2D(r->left_child, space); // Process left child  7
	}
	/*PatientRecord SearchITR(PatientRecord obj)
	{
		if (isEmpty())
		{
			return obj;
		}
		else
		{
			TNode* temp = root;
			while (temp != NULL)
			{
				if (obj.patient_id == temp->Patient_record.patient_id)
				{
					cout << "Found" << endl;

					return obj;
				}
				else if (obj.patient_id < temp->Patient_record.patient_id)
				{
					temp = temp->left_child;
				}
				else
				{
					temp = temp->right_child;
				}
			}
			cout << "Not Found" << endl;
		}

	}*/
	/*int addBT(TNode* temp)
	{
		if (temp == NULL)
			return 0;
		return (temp->Patient_record.patient_id + addBT(temp->left_child) + addBT(temp->right_child));
	}*/
	/*TNode* AddToArray(TNode* node, int& i, int Size)
	{

		if (node == NULL || i == Size)
		{
			return node;
		}

		AddToArray(node->left_child, i, Size);
		i++;
		AddToArray(node->right_child, i, Size);
		return node;
	}*/
	/*TNode* median (TNode* temp)
	{
		int i = 0;
		TNode* p = AddToArray(root, i , (size/2) + 1);
		cout << p->Patient_record.patient_id << endl;
		
		return temp;
	}*/
	void InorderSplit()
	{
		int i = 0;
		inorderSplit(root , i );
		cout << endl;
	}
	void inorderSplit(TNode* T , int& Size)
	{
		if (T != NULL)
		{

			inorderSplit(T->left_child, Size);
			if (size/2 + 1  == Size+1) 
			{
				SearchITR(T->Patient_record.patient_id , 0);
			}
			Size++;
			inorderSplit(T->right_child , Size);

		}

	}
	//TNode* Split()
	//{
	//	TNode* Median = median(root);
	//	TNode* temp = root;
	//	root = NULL;
	//	TNode* temp1 = nullptr;
	//	TNode* temp2 = nullptr;
	//	//preordersplit1(temp, Median);
	//	temp1 = root;
	//	//preordersplit2(temp, Median);
	//	temp2 = root;
	//	root = NULL;
	//	return temp2;
	//}
	int find(TNode* root, int t, int l)
	{
		if (!root)
			return 0;
		if (root->Patient_record.patient_id == t)
			return l;
		int x = find(root->left_child, t, l + 1);
		if (x != 0)
			return x;
		x = find(root->right_child, t, l + 1);
		return x;
	}
	int getLevel(TNode* node, int target)
	{
		if (!node)
			return 0;
		int l = 1;
		return find(node, target, l);
	}
	void moveup(TNode*& temp ,int val , int level)
	{
		if (temp->left_child != NULL && temp->left_child->Patient_record.patient_id == val )
		{
			if (getLevel(root , temp->left_child->Patient_record.patient_id)-1 > level)
			{
				temp = RigthRotations(temp);
				if (getLevel(root, temp->Patient_record.patient_id)-1 > level)
				{
					SearchITR(val, level);
				}
			}
		}
		else if (temp->right_child != NULL && temp->right_child->Patient_record.patient_id == val)
		{
			if (getLevel(root, temp->right_child->Patient_record.patient_id)-1 > level)
			{
				temp = LeftRotations(temp);
				if (getLevel(root, temp->Patient_record.patient_id)-1 > level)
				{
					SearchITR( val , level);
				}
			}
		}
		else if (val < temp->Patient_record.patient_id)
		{
			moveup(temp->left_child, val, level);
		}
		else if (val > temp->Patient_record.patient_id)
		{
			moveup(temp->right_child, val, level);
		}
		else
		{
			return;
		}
	}
	bool SearchITR(int val, int level)
	{
		if (isEmpty())
		{
			return false;
		}
		else
		{
			TNode* temp = root;
			TNode* prev = NULL;
			while (temp != NULL)
			{
				if (val == temp->Patient_record.patient_id)
				{
					moveup(root, val, level);
					return true;
				}
				else if (val < temp->Patient_record.patient_id)
				{
					prev = temp;
					temp = temp->left_child;
				}
				else
				{
					prev = temp;
					temp = temp->right_child;
				}
			}
			return false;
		}

	}
	void DestroyRecursive(TNode* node)
	{
		if (node)
		{
			DestroyRecursive(node->left_child);
			DestroyRecursive(node->right_child);
			delete node;
		}
	}
	~HospitalData()
	{
		DestroyRecursive(root);
	}
private:
	TNode* root;
	int size;
};
int main()
{
	PatientRecord P1(20, "Hassan", "3/7/21", "cancer", "admitted");
	PatientRecord P2(10, "Rehan", "6/7/21", "TB", "admitted");
	PatientRecord P3(30, "Waseef", "9/7/21", "Covid", "discharged");
	PatientRecord P4(40, "Ali", "12/7/21", "Dengue", "admitted");
	PatientRecord P5(15, "Zain", "15/7/21", "Blood Pressure", "admitted");
	PatientRecord P6(5, "Kumail", "18/7/21", "Flu", "discharged");
	PatientRecord P7(17, "Qadeer", "21/7/21", "Diabetis", "admitted");
	PatientRecord P8(19, "Shery", "24/7/21", "Lung Cancer", "admitted");
	PatientRecord P9(23, "Huraira", "27/7/21", "Heart Attack", "discharged");
	PatientRecord P10(50, "Qadeer", "21/7/21", "Diabetis", "admitted");
	PatientRecord P11(18, "Shery", "24/7/21", "Lung Cancer", "admitted");
	PatientRecord P12(24, "Huraira", "27/7/21", "Heart Attack", "discharged");
	HospitalData OBJ;
	OBJ.Insert(P1);
	OBJ.Insert(P2);
	OBJ.Insert(P3);
	OBJ.Insert(P4);
	OBJ.Insert(P5);
	OBJ.Insert(P6);
	OBJ.Insert(P7);
	OBJ.Insert(P8);
	OBJ.Insert(P9);
	OBJ.Insert(P10);
	OBJ.Insert(P11);
	OBJ.Insert(P12);
	OBJ.PrintAdmitted();
	//OBJ.Remove(P2);
	//OBJ.Print(2);
	OBJ.Print2d();
	if (OBJ.SearchITR(10, 1))
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
	OBJ.Print2d();
	OBJ.InorderSplit();
	OBJ.Print2d();
	//OBJ.Split();
	//system("pause");
	return 0;
}