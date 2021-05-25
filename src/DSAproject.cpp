#include<iostream>
#include<string.h>								// used for string function.
#include<cstdlib>								//C General Utilities Library
#include<ctime>									//C Time Library
using namespace std;

class p											// First class
{
    int vehicle_type;
    char registration_no[30];

    double bill;
    friend class node;
public:
    p()
{
    	bill=0;
}
    void accept_display();
    double amount();

};

double p :: amount()
{
    return(bill);
}

class node									//Second class
{
    p data;
    node*next;
    public:
    node()
    {
        next=NULL;
    }
    friend class q;
};

class q										//Third class
{
    node *front,*rear;
    double cash;
    int totalVehicles;
public:
    q()										//initialize pointer values
    {
        front=NULL;
        rear=NULL;
        cash = 0;
        totalVehicles = 0;
    }
    int empty();
    void enqueue();
    void dequeue();

    double addToCollection(double);
    double NetcashCollection();
    int vehicleCount();
};
int q :: vehicleCount()
{
    return totalVehicles;
}
double q :: addToCollection(double x)
{
    cash += x;
}
double q :: NetcashCollection(){
    return cash;
}
void p :: accept_display()								//accept type of vehicle and registration number to display bill details
{

	char a[10];

    cout<<"\n\t\t\tENTER VEHICLE DETAILS  ";
    cout<<"\nTYPE OF VEHICLE :\n \n";
    cout<<"1- Press 1 for Truck"<<endl;
    cout<<"2- Press 2 for Bus"<<endl;
    cout<<"3- Press 3 for car"<<endl;
    cout<<"4- Press 4 for Government vehicles"<<endl;
    cout<<"5- Press 5 for Van"<<endl;
    cout<<"6- Press 6 for Two wheelers"<<endl;
    cout<<"7- Enter O for ending program"<<endl;
    cin>>vehicle_type;
    cout<<"\nREGISTRATION NUMBER OF VEHICLE : ";
    cin>>registration_no;
    int random =rand();											//For Serial number

    if(vehicle_type==1)											//  Bill for Truck
    	    {
    			cout<<"\n Do you want double journey within 24 hours ? (yes =y,no=n)";

    			cin>>a;
    			cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
    	    	cout<<"\n\t\t\t\t\t LANE 1";

    	    	cout<<"\n\t\t\t\tVEHICLE CLASS : TRUCK";
    	    	if(strcmp(a,"y")==0)
    	    	cout<<"\n\n\t\t\t\t TOLL : Rs 225";
    	    	else
    	    		cout<<"\n\n\t\t\t\t TOLL : Rs 150";
    	    	cout<<"\n\n\t\t\t\t PAYMENT METHOD:  CASH";
    	    	cout<<"\n\n\t\t\t\t SERIAL #:"<<random;

    	    	cout<<"\n\t\t\t-------------------------------------\n";
    	    	cout<<"\n\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
    	    	if(strcmp(a,"y")==0)

                bill += 150+75;
    	    	else
    	    		bill+=150;
    	    }
    	else if(vehicle_type==2)								//Bill for Bus
    	       {
    			cout<<"\n Do you want double journey within 2 hours ? (yes =y,no=n)";

				cin>>a;
    			cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
				cout<<"\n\t\t\t\t\t LANE 2";
				cout<<"\n\t\t\t\tVEHICLE CLASS : BUS";
				if(strcmp(a,"y")==0)
    	    	cout<<"\n\n\t\t\t\t TOLL : Rs 180";
				else
					cout<<"\n\t\t\t\t TOLL : Rs 120";
    	    	cout<<"\n\n\t\t\t\t PAYMENT METHOD:  CASH";
    	    	cout<<"\n\n\t\t\t\t SERIAL #:"<<random;
    	    	cout<<"\n\t\t\t-------------------------------------\n";
				cout<<"\n\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
				if(strcmp(a,"y")==0)
    	       bill += 120+60;
				else
					bill+=120;
    	       }
	else if(vehicle_type==3)									   //Bill for Car
    	       {
					cout<<"\n Do you want double journey within 24 hours ? (yes =y,no=n)";

					cin>>a;
					cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
    	           	cout<<"\n\t\t\t\t\t LANE 3";
    	           	cout<<"\n\t\t\t\tVEHICLE CLASS : CAR";
    	           	if(strcmp(a,"y")==0)
					cout<<"\n\n\t\t\t\t TOLL : Rs 195";
    	           	else
    	           		cout<<"\n\n\t\t\t\t TOLL : Rs 130";
					cout<<"\n\n\t\t\t\t PAYMENT METHOD:  CASH";
					cout<<"\n\n\t\t\t\t SERIAL #:"<<random;
					cout<<"\n\t\t\t-------------------------------------\n";
					cout<<"\n\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
					if(strcmp(a,"y")==0)
    	      bill += 130+65;
					else
						bill+=130;
    	       }
    else if(vehicle_type==4)										//Bill for Government Vehicle
    	       {
				cout<<"\n Do you want double journey within 24 hours ? (yes =y,no=n)";

				cin>>a;
    			cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
				cout<<"\n\t\t\t\t\t LANE 4";
				cout<<"\n\t\t\t\tVEHICLE CLASS : GOVT. VEHICLES";
    	    	cout<<"\n\n\t\t\t\t TOLL : Rs 0";
    	    	cout<<"\n\n\t\t\t\t PAYMENT METHOD:  CASH";
    	    	cout<<"\n\n\t\t\t\t SERIAL #:"<<random;
    	    	cout<<"\n\t\t\t-------------------------------------\n";
				cout<<"\n\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
				if(strcmp(a,"y")==0)
    	       bill += 0;
				else
					bill+=0;
    	       }
    else if(vehicle_type==5)									//Bill for Van
    	       {
    			cout<<"\n Do you want double journey within 24 hours ? (yes =y,no=n)";

				cin>>a;
				cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
				cout<<"\n\t\t\t\t\t LANE 5";
				cout<<"\n\t\t\t\tVEHICLE CLASS : VAN";
			 	if(strcmp(a,"y")==0)
    	    	cout<<"\n\n\t\t\t\t TOLL : Rs 90";
			 	else
			 		cout<<"\n\n\t\t\t\t TOLL : Rs 60";
    	    	cout<<"\n\n\t\t\t\t PAYMENT METHOD:  CASH";
    	    	cout<<"\n\n\t\t\t\t SERIAL #:"<<random;
    	    	cout<<"\n\t\t\t-------------------------------------\n";
				cout<<"\n\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
				if(strcmp(a,"y")==0)
    	       bill += 60+30;
				else
					bill+=60;
    	       }
    else if(vehicle_type==6)									//Bill for MotorBike
    	       {
    			cout<<"\n Do you want double journey within 24 hours ? (yes =y,no=n)";

				cin>>a;
				cout<<"\n\t\t\t\tPLAZA : AKAM TOLL PLAZA";
				cout<<"\n\t\t\t\t\t LANE 6";
				cout<<"\n\t\t\t\tVEHICLE CLASS : TWO WHEELERS";
				if(strcmp(a,"y")==0)
    	    	cout<<"\n\n\t\t\t\t TOLL : Rs 60";
				else
					cout<<"\n\n\t\t\t\t TOLL : Rs 40";
    	    	cout<<"\n\\t\t\t\t PAYMENT METHOD:  CASH";
    	    	cout<<"\n\n\t\t\t\t SERIAL #:"<<random;
    	    	cout<<"\n\t\t\t-------------------------------------\n";
				cout<<"\t\t\tWISH YOU A HAPPY & SAFE JOURNEY";
				if(strcmp(a,"y")==0)
    	      bill += 40+20;
				else
					bill+=40;
    	       }
    else if(vehicle_type == 7){
        cout << "\nEnding program" << endl;
    }
    	       cout<<"\nCASH COLLECTED : "<< bill;

}



int q::empty()													  //check if queue is empty
{
    if(front==NULL && rear==NULL)
        return 1;
        else
        return 0;
}

void q::enqueue()												 // Input details of vehicle in list
{
    node *temp;


    temp=new node();
    temp->data.accept_display();
    addToCollection(temp->data.amount());
    totalVehicles++;
   if(front==NULL)
    {
        rear=temp;
        front=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;

    }
       time_t tt;											// Declaring variable to store return value of

    struct tm * ti;											 // Applying time()


    time (&tt);


    ti = localtime(&tt);

    cout << "\nCurrent Day, Date and Time is = "
         << asctime(ti);


}
    void q::dequeue()									  //vehicle removed from queue after bill is paid
    {

    	 node *ptr=front;
    	    if(front==NULL)
    	        cout<<"\nNO VEHICLES IN THE QUEUE.\n";
    	    else
    	    {
    	        front=front->next;
    	        cout<<"\nVEHICLE PASSED . BILL GIVEN ."<<endl;
    	        delete ptr;
    	    }


    }

int main()												 //Main Method


{
    int i=1,e=0;
    q w;

    cout<<"         ********   **    *     *        *****     **      **   ********  *   *"<<std::endl;

         cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;

         cout<<"            **    *    *  *     *        *****   *    *  *    *    **     *****"<<endl;

         cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;

         cout<<"            **      **    ***** *****    *****     **      **      **     *   *"<<endl;
    do{
cout<<"\n1 - NEW VEHICLE \n2 - BILL PAID : LET VEHICLE LEAVE \n3 - TOTAL VEHICLE COUNT TODAY \n4 - TOTAL CASH COLLECTED";				// Menu
cout<<"\nEnter choice :";
cin>>i;
switch(i)											 // Switch case for Toll-Plaza entry and exit
{
    case 1 : w.enqueue();
    		e++;
    		break;
    case 2:
    		w.dequeue();

    		break;
    case 3:
    		cout<<"\nTotal vehicles : "<< w.vehicleCount()<<"\n";
    		break;
    case 4:
            cout << "\nToday's collection is : " << w.NetcashCollection() << endl;
            break;
    default : cout<<"\nERROR";
    i=0;
    break;
}
    }
    while(i!=0);									 //End of count at the end of the day.


}











/*
 * -------------------------OUTPUT 1----------------------
 *         ********   **    *     *        *****     **      **   ********  *   *
            **     *  *   *     *        *    *   *  *    *  *     **     *   *
            **    *    *  *     *        *****   *    *  *    *    **     *****
            **     *  *   *     *        *    *   *  *    *  *     **     *   *
            **      **    ***** *****    *****     **      **      **     *   *

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :1

			ENTER VEHICLE DETAILS
TYPE OF VEHICLE :

1- Press 1 for Truck
2- Press 2 for Bus
3- Press 3 for car
4- Press 4 for Government vehicles
5- Press 5 for Van
6- Press 6 for Two wheelers
7- Enter O for ending program
1

REGISTRATION NUMBER OF VEHICLE : MH2401

 Do you want double journey within 24 hours ? (yes =y,no=n)y

				PLAZA : AKAM TOLL PLAZA
					 LANE 1
				VEHICLE CLASS : TRUCK

				 TOLL : Rs 225

				 PAYMENT METHOD:  CASH

				 SERIAL #:41
			-------------------------------------

			WISH YOU A HAPPY & SAFE JOURNEY
CASH COLLECTED : 225
Current Day, Date and Time is = Mon Oct 15 00:25:19 2018

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :1

			ENTER VEHICLE DETAILS
TYPE OF VEHICLE :

1- Press 1 for Truck
2- Press 2 for Bus
3- Press 3 for car
4- Press 4 for Government vehicles
5- Press 5 for Van
6- Press 6 for Two wheelers
7- Enter O for ending program
2

REGISTRATION NUMBER OF VEHICLE : MH3821

 Do you want double journey within 2 hours ? (yes =y,no=n)n

				PLAZA : AKAM TOLL PLAZA
					 LANE 2
				VEHICLE CLASS : BUS
				 TOLL : Rs 120

				 PAYMENT METHOD:  CASH

				 SERIAL #:18467
			-------------------------------------

			WISH YOU A HAPPY & SAFE JOURNEY
CASH COLLECTED : 120
Current Day, Date and Time is = Mon Oct 15 00:25:41 2018

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :2

VEHICLE PASSED . BILL GIVEN .

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :2

VEHICLE PASSED . BILL GIVEN .

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :2

NO VEHICLES IN THE QUEUE.

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :3

Total vehicles : 2

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :4

Today's collection is : 345

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :





-------------------OUTPUT 2--------------------
         ********   **    *     *        *****     **      **   ********  *   *
            **     *  *   *     *        *    *   *  *    *  *     **     *   *
            **    *    *  *     *        *****   *    *  *    *    **     *****
            **     *  *   *     *        *    *   *  *    *  *     **     *   *
            **      **    ***** *****    *****     **      **      **     *   *

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :2

NO VEHICLES IN THE QUEUE.

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :2

NO VEHICLES IN THE QUEUE.

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :3

Total vehicles : 0

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :4

Today's collection is : 0

1 - NEW VEHICLE
2 - BILL PAID : LET VEHICLE LEAVE
3 - TOTAL VEHICLE COUNT TODAY
4 - TOTAL CASH COLLECTED
Enter choice :
 */
