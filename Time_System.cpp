#include <iostream>
using namespace std;

class time{
	private:
		int hour;
		int minute;
		int second;
	public:
		time(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		void display()
		{
		
			while(hour<25 && minute<61 && second<61){
	

	 		if(hour%10==hour)
			{
				if(minute%10==minute)
				{
					if(second%10==second)
					{
						cout<<"The time is = "<<0<<hour<<":"<<0<<minute<<":"<<0<<second;
					}
					else{
						cout<<"The time is = "<<0<<hour<<":"<<0<<minute<<":"<<second;
					}
				}
				else
				{
					if(second%10==second)
					{
						cout<<"The time is = "<<0<<hour<<":"<<minute<<":"<<0<<second;
					}
					else{
						cout<<"The time is = "<<0<<hour<<":"<<minute<<":"<<second;
					}
				}
			}
			else{
				if(minute%10==minute)
				{
					if(second%10==second)
					{
						cout<<"The time is = "<<hour<<":"<<0<<minute<<":"<<0<<second;
					}
					else{
						cout<<"The time is = "<<hour<<":"<<0<<minute<<":"<<second;
					}
				}
				else
				{
					if(second%10==second)
					{
						cout<<"The time is = "<<hour<<":"<<minute<<":"<<0<<second;
					}
					else{
						cout<<"The time is = "<<hour<<":"<<minute<<":"<<second;
					}
				}
				}
		break;
	}
if(hour>24 || minute>60 || second>60){
	cout<<"Kindly Check your input plz........."<<endl;
	system("pause");
}
		}
		
		friend void total(time);
};
void total(time s)
{
	if(s.hour<25 && s.minute<61 && s.second<61){
	
	cout<<endl<<"Time in total seconds : "<<3600*(s.hour)+60*(s.minute)+(s.second);
}else{cout<<endl<<"Not possible";}
}

int main()
{
	int h,m,s;
	cout<<"Hour? ";
	cin>>h;
	cout<<endl<<"Minute? ";
	cin>>m;
	cout<<endl<<"Second? ";
	cin>>s;
	time t(h,m,s);
	cout<<endl;
	t.display();
	cout<<endl;
	total(t);
	return 0;
}
