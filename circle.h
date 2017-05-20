template <class T> //define class circle with templates
class circle {
	public: //The class' public functions
		circle(T x1 = 0, T y1 = 0, T x2 = 0, T y2=0); //constructor
		double radius();
		double circumference();
		double area(); 
		void populate_classobj(T x1, T y1, T x2, T y2);

	protected: //member accessible by self and derived classes
		double distance();

	private: //The class' private internal data members can be of any type, T
		T x1;
		T y1;
		T x2;
		T y2;
};
