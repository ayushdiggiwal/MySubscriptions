#include<iostream>
using namespace std;

class TOI
{
	private:
		float mon1 =3;
		float tue1 =3;
		float wed1 =3;
		float thu1 =3;
		float fri1 =3 ;
		float sat1 =5;
		float sun1 =6;
		float total1;
		
	public:
		float sum1()
		{
			total1=mon1+tue1+wed1+thu1+fri1+sat1+sun1;
			return total1;
		}
	
};

class hindu : public TOI
{
		private:
		float mon2 =2.5;
		float tue2=2.5;
		float wed2=2.5;
		float thu2 =2.5;
		float fri2 =2.5 ;
		float sat2 =4;
		float sun2 =4;
		float total2;
		
	public:
		float sum2()
		{
			total2=mon2+tue2+wed2+thu2+fri2+sat2+sun2;
			return total2;
		}
};

class ET : public hindu
{
		private:
		float mon3 =4;
		float tue3 =4;
		float wed3 =4;
		float thu3 =4;
		float fri3 =4 ;
		float sat3 =4;
		float sun3 =10;
		float total3;
		
	public:
		float sum3()
		{
			total3=mon3+tue3+wed3+thu3+fri3+sat3+sun3;
			return total3;
		}
};

class BM : public ET
{
		private:
		float mon4 =1.5;
		float tue4 =1.5;
		float wed4 =1.5;
		float thu4 =1.5;
		float fri4 =1.5;
		float sat4 =1.5;
		float sun4 =1.5;
		float total4;
		
	public:
		float sum4()
		{
			total4=mon4+tue4+wed4+thu4+fri4+sat4+sun4;
			return total4;
		}
};

class HT : public BM
{
		private:
		float mon5 =2;
		float tue5 =2;
		float wed5 =2;
		float thu5 =2;
		float fri5 =2;
		float sat5 =4;
		float sun5 =4;
		float total5;
		
	public:
		float sum5()
		{
			total5=mon5+tue5+wed5+thu5+fri5+sat5+sun5;
			return total5;
		}
};

int main()
{
	HT h1;
	float input,temp1,temp2;
	float arr[5];
	char str[5][10]={"TOI","hindu","ET","BM","HT"};
	cout<<"Enter your input:";
	cin>>input;
	
	arr[0]=h1.sum1();
	arr[1]=h1.sum2();
	arr[2]=h1.sum3();
	arr[3]=h1.sum4();
	arr[4]=h1.sum5();

	
	for(int i=0;i<5;i++)
	{
		temp1=arr[i];
		for(int j=0;j<5;j++)
		{
			if(j==i)
				continue;
				
			temp2=arr[j];
			
			if((temp1+temp2)<=input)
			{
				cout<<str[i]<<"\t"<<str[j]<<endl;
			}
		}
	}
	return 0;
}