class base
{	public void out()
	{	System.out.println("Base Class");
	}
}

class derived extends base
{	public void out()
	{	System.out.println("Derived Class");
	}
}

class prac41
{	public static void main(String args[])	
	{	base b=new base();
		b.out();
		derived d=new derived();
		d.out();
	}
}

