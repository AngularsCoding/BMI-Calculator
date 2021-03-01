#include<iostream>
#include<conio.h> 

using namespace std;
  
void calculateBMI() {
     
	system("cls");
	
	double weight;
	double height;
	
	cout<<endl<<endl;
	cout << "Enter your weight (in kilograms): ";
    cin >> weight;
 
    cout << "Enter your height (in meters): ";
    cin >> height;
 
    double bmi = weight / (height * height);
 	
 	cout<<endl<<endl;
 	cout<<"----------------------------------"<<endl;
    cout << "Your Body Mass Index is " << bmi << endl;
 
 	cout<<"----------------------------------"<<endl;
    if(bmi < 18.5)
        cout << "You are Underweight";
    else if(bmi >= 18.5 && bmi <= 25)
        cout << "You are Perfectly Healthy";
    else if(bmi > 25)
        cout << "You are Overweight";
 	cout<<endl<<"----------------------------------";
        
	cout<<"\n\nPress any key to go back to Menu... ";
	getch(); 
 
}

void instructions(){
	
	system("cls");
	cout<<"Instructions";
	cout<<"\n----------------";
	cout<<"\n BMI is less than 18.5 : You are Underweight";
	cout<<"\n BMI is between 18.5 and 25 (inclusive) : You are Perfectly Healthy";
	cout<<"\n BMI is greater than 25 : You are Overweight";
	cout<<"\n\nPress any key to go back to menu";
	getch();
}

int main()
{ 
	do{
		system("cls");
		cout<<" ------------------------------------ "<<endl; 
		cout<<" |          BMI Calculator          | "<<endl; 
		cout<<" ------------------------------------"<<endl<<endl;
		cout<<"1. Calculate BMI"<<endl;
		cout<<"2. BMI Rules"<<endl;	 
		cout<<"3. Quit"<<endl<<endl;
		cout<<"Select option: ";
		char op = getche();
		
		if( op=='1') calculateBMI();
		else if( op=='2') instructions();
		else if( op=='3') exit(0);
		
	}while(1);
	
	return 0;
}
