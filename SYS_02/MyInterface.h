interface IX : IUnknown
{
	virtual void __stdcall Fx() = 0;
	virtual int __stdcall Pow(int p) = 0;
};

interface IY :IUnknown
{
	virtual void __stdcall Fy() = 0;

};