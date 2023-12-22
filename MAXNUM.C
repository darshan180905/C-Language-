class two;
class one
{
	int x;
	public:
	one()
	{
		x=10;
	}
	friend void max(one,two);
};
class two
{
	int y;
	public:
	tow()
	{
		y=20;
	}
	friend void max(one,two);
}
void max(one a,two b)
{
	if(a.x>b.y)
		cout<<"max is x";
		else
		cout<<"max is y";
	}
	void main()
	{
		one();
		two t;
		max(o,t);
		getch();
	}