/*
 * 题号：38
 * 题目：快递包裹计费（继承与多态）
 * 描述：定义 Parcel 基类，派生 StandardParcel（重量×单价）与 ExpressParcel（重量×单价+加急费）。
 *      根据输入创建对象，输出各自信息与运费，并比较两者运费大小。
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<algorithm>
using namespace std;

// 基类：快递包裹
class Parcel
{
	protected:
		string trackingNumber;  // 运单号
	public:
		Parcel(string num) : trackingNumber(num) {}
		virtual int calculateFee() const = 0;  // 纯虚函数：计算运费
	    virtual void display() const
		{
		    cout << trackingNumber;
		}
		virtual ~Parcel() {}  // 虚析构
};

// 派生类：普通包裹
class StandarParcel:public Parcel
{
	private:
		int weight, unitPrice;
	public:
		StandarParcel(string num,int w,int p):Parcel(num),weight(w),unitPrice(p){}

		int calculateFee() const override
		{
			return weight*unitPrice;
		}
		void display() const override
		{
			cout<<"Standard"<<trackingNumber<<","<<weight<<"kg]";
		}
};

// 派生类：加急包裹
class ExpressParcel:public Parcel
{
	private:
		int weight;
		int unitPrice;
		int expressFee;
	public:
		ExpressParcel(string num,int w,int p,int e):Parcel(num),weight(w),unitPrice(p),expressFee(e){}
		int calculateFee() const override
		{
			return weight*unitPrice+expressFee;
		}
		void display() const override
		{
			cout << "Express[" << trackingNumber << "," << weight << "kg]+" << expressFee;
		}
};

int main()
{
	Parcel* parcels[2]={};  // 基类指针数组
	for(int i=0;i<2;i++)
	{
		string type,trackingNum;
		int weight,unitPrice,expressFee;

		cin>>type>>trackingNum>>weight>>unitPrice;
		if(type=="Standard")
		{
			parcels[i]=new StandarParcel(trackingNum,weight,unitPrice);
		}
		else if(type=="Express")
		{
			cin>>expressFee;
			parcels[i]=new ExpressParcel(trackingNum,weight,unitPrice,expressFee);
		}
	}

	for(int i=0;i<2;i++)
	{
		parcels[i]->display();
		cout<<":"<<parcels[i]->calculateFee()<<endl;
	}
	int fee1=parcels[0]->calculateFee();
	int fee2=parcels[1]->calculateFee();

	if(fee1>fee2)
	{
		 cout << "Parcel1 > Parcel2" << endl;
	} else if(fee1 < fee2) {
		cout << "Parcel1 < Parcel2" << endl;
	} else {
		cout << "Parcel1 = Parcel2" << endl;
	}
	delete parcels[0];
	delete parcels[1];
	return 0;
}
