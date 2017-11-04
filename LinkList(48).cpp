#include<iostream>
using namespace std;
class nodes
{
	public:
	int info;
	nodes *link;

}*start;

class list
{
	public:
		list()  //constructor
		{
			start=NULL;
		}
	
	nodes  *create_node(int value)
	{
	
	nodes *temp = new nodes();			// making of new class named nodes continuosly use at every insertion of new value
    temp->info=value;
    temp->link=NULL;
    return temp; //not neccessary
    }
    
    void insert_beg()
    {
    	int num;
    	cout<<"enter value to the node\n";
    	cin>>num;
      
         nodes *temp, *p;

        

        if (start == NULL)

        {		 temp=create_node(num);							// only for one time run of these 'if' statement ......for puting first value

            start = temp; 
                                                      
            start->link = NULL;            //  neccessary because here temp and start both point node and temp already have null...check create nodes functiom           
           
        } 

        else

        {  temp=create_node(num);

            p = start;

        start=temp;

            start->link = p;
       
        }

        

	}
	   void insert_last()

    {

        int num;

        cout<<"Enter the value to be inserted: ";

        cin>>num;

         nodes *temp, *s;

        temp = create_node(num);

        s = start;

        while (s->link != NULL)

        {         

            s = s->link;        

        }

        temp->link = NULL;

        s->link = temp;

        cout<<"Element Inserted at last"<<endl;  

    }

	void display()
	{
		 

    

         nodes *temp;

        if (start == NULL)

        {

            cout<<"The List is Empty"<<endl;

            return;

        }

         temp=start;

        cout<<"Elements of list are: "<<endl;

        while (temp != NULL)

        {

            cout<<temp->info<<"->";

            temp = temp->link;

        }

        cout<<"NULL"<<endl;

    
	}
};
int main()
{  int ch;
	list sl;
	
do	{ cout<<"1.Insert at beg\t\t2.Insert at last\n3.display\t\t4.exit\n";
      cin>>ch;
      switch(ch)
      {
	  case 1:
	{
	 
	sl.insert_beg();
     break;}
     case 2:
	sl.insert_last();
	break;
	case 3:
		sl.display();
		break;
		case 4:
			return 0;
		default:
		cout<<"\nsomething is wrong..";	
		 }
}
while(true);

}
