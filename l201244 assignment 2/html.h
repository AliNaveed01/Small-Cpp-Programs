#include<iostream>
#include<fstream>
#include<stack>

 using namespace std;
	
	class Html
{
	stack<char*> script;
	bool validity;

 public:
	Html()
{
	validity=false;
}
	void set_validity()
{
	validity=check_script();
}
	bool get_validity()
{
	return validity;
}
	void check_validity()
{
	if(get_validity())
		cout<<"The given HTML script is well formed.";
	else
		cout<<"The given HTML script is not well formed.";
}
	bool check_script()
{
	int index=0;
	char* prev=0;
	char* next=0;
	int headers[11]={0};
	prev=script.top();
	script.pop();
	if(((prev=="<html>")||(prev=="<head>")||(prev=="<title>")||(prev=="<body>")||(prev=="<p>")))
			return false;
	for(index=0;!script.empty();index++)
	{
		if(index>0)
			prev=next;
		next=script.top();
		cout<<next;
		script.pop();
		if(prev=="</html>")
		{
			headers[0]++;
			if((next=="<head>")||(next=="<title>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</body>")
		{
			headers[1]++;
			if((next=="<head>")||(next=="</head>")||(next=="<title>")||(next=="</title>")||(next=="<html>")||(next=="</html>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</head>")
		{
			headers[2]++;
			if((next=="<body>")||(next=="</body>")||(next=="<title>")||(next=="<html>")||(next=="</html>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</p>")
		{
			headers[3]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</title>")
		{
			headers[4]++;
			if((next=="<head>")||(next=="<p>")||(next=="</p>")||(next=="<html>")||(next=="<body>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h1>")
		{
			headers[5]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h2>")
		{
			headers[6]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h3>")
		{
			headers[7]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h4>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h4>")
		{
			headers[8]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h5>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h5>")
		{
			headers[9]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h6>"))
				return false;
		}
		else if(prev=="</h6>")
		{
			headers[10]++;
			if((next=="<head>")||(next=="<title>")||(next=="<html>")||(next=="<body>")||(next=="<p>")||(next=="<h1>")||(next=="<h2>")||(next=="<h3>")||(next=="<h4>")||(next=="<h5>"))
				return false;
		}
		else
		{
			if(prev=="<html>")
				headers[0]--;
			else if(prev=="<body>")
				headers[1]--;
			else if(prev=="<head>")
				headers[2]--;
			else if(prev=="<p>")
				headers[3]--;
			else if(prev=="<title>")
				headers[4]--;
			else if(prev=="<h1>")
				headers[5]--;
			else if(prev=="<h2>")
				headers[6]--;
			else if(prev=="<h3>")
				headers[7]--;
			else if(prev=="<h4>")
				headers[8]--;
			else if(prev=="<h5>")
				headers[9]--;
			else if(prev=="<h6>")
				headers[10]--;
		}
	}
	if(prev=="<html>")
		headers[0]--;
	else if(prev=="<body>")
		headers[1]--;
	else if(prev=="<head>")
		headers[2]--;
	else if(prev=="<p>")
		headers[3]--;
	else if(prev=="<title>")
		headers[4]--;
	else if(prev=="<h1>")
		headers[5]--;
	else if(prev=="<h2>")
		headers[6]--;
	else if(prev=="<h3>")
		headers[7]--;
	else if(prev=="<h4>")
		headers[8]--;
	else if(prev=="<h5>")
		headers[9]--;
	else if(prev=="<h6>")
		headers[10]--;
	for(index=0;index<11;index++)
	{
		if(headers[index]!=0)
			return false;
	}
	return true;
}
	void input_script()
{
	ifstream in;
	in.open("html.txt");
	char* input=new char [10];
	char byte;
	bool flag=false;
	int index=0;
	while(!in.eof())
	{
		in>>byte;
		//cout<<byte;
		if(byte=='<')
		{
			flag=true;
			index=0;
		}
		if(flag)
		{
			input[index]=byte;
			index++;
		}
		if(byte=='>')
		{
			input[index]='\0';
			script.push(input);
			input=new char [10];
			if(in.eof())
				break;
			//strcpy(input,"\0");
			flag=false;
		}
	}
}
	void print()
{
	while(!script.empty())
	{ 
		cout<<script.top();
		script.pop();
	}
}
	~Html()
{
	while(!script.empty())
		script.pop();
}
};