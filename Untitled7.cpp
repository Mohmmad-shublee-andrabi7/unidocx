#include<iostream>
using namespace std;
int main(){
	double withdraw,deposit,balance;
	cout<<"enter balance"<<endl;
	cin>>balance;
	int op;
do{
	cout<<"\nmenu options";
	cout<<"\n1checkbalance";
	cout<<"\n2withdraw";
	cout<<"\n3deposit";
	cout<<"\n4exit";
	cout<<"\n--->>";
	cin>>op;
switch(op){
	case1:
		cout<<balance;
		break;
		case 2:
			cout<<"enter amount:";
			cin>>withdraw;
			if(withdraw>balance){
				cout<<"gareeb";
			}
			else{
				balance=balance-withdraw;
			cout <<"withdraw sucess full";
				break;
			}
			case 3:
				cout<<"enter amount :";
				cin>>deposit;
				balance =balance + deposit ;
				cout<<"deposit sucessfull :";
				break;
				default:
					break;
				{
				}while(op!=4)}

