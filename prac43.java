class base
{	public void outb()
	{	System.out.println("Base Class");
	}
}

class derived extends base
{	public void outd()
	{	System.out.println("Derived Class");
	}
}

class derived2 extends derived
{	public void outd2()
	{	System.out.println("Third Level Class");
	}
}

class prac43
{	public static void main(String args[])
	{	derived2 a=new derived2();
		a.outd2();
		a.outd();
		a.outb();
	}
}
	
