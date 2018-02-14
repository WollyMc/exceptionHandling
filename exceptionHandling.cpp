/*The problem is based off skillrack.
 * Using exceptional case handling
 * for finding pressure2 from the 
 * equation p1v1/t1=p2v2/t2
 * note: t1 and v2 cannot be zero.*/
 
 #include<iostream>
 using namespace std;
 
 class tem
 {
	 private:
		float p1,p2,v1,v2,t1,t2,x,y;
	 public:
		void input()
		{
			cout<<"Enter p1, v1, t1, v2, t2 with space:"<<endl;
			cin>>p1>>v1>>t1>>v2>>t2;
		}
		
		void check()
		{
			try
			{
				if (t1==0)
					throw(t1);
				if (v2==0)
					throw(v2);
			}
			
			catch(float t1){
				cout<<"Zero is not allowed";}
			catch (float v2){
				cout<<"Zero is not allowed";}
		}
		void cal()
		{
			p2=(p1*v1*t2)/(t1*v2);
			cout<<p2;
		}
};

int main()
{	
	int x;
	do{
	tem a;
	a.input();
	a.check();
	a.cal();
	cout<<endl<<"Again? press 0"<<endl;
	cin>>x;
	}while(x==0);
	return 0;
}
				
