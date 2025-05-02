#include <iostream>

class Copy
{
    private:
        int* list;
    public:
        Copy()
        {
            list = new int[100];
            for(int i = 0; i < 100; ++i)
                list[i] = -1;
        }
        // Copy(const Copy& obj)
        // {
        //     list  = new int[100];
        //     for (int i = 0; i < 100; i++)
        //     {
        //         list[i] = obj.list[i];
        //     }
            
        // }
        void setIndex(int indx, int val)
        {
            list[indx] = val;
        }
        void GetData(int N)
        {
            for(int i = 0 ; i < N ; i++)
                std::cout << "(" << list[i] << ") -> " ;
            std::cout<<std::endl;
        }

};



int main()
{
    Copy obj1;
    obj1.GetData(6);

    Copy obj2 = obj1;
    obj1.setIndex(4 , 77);
    obj1.GetData(6);
    obj2.GetData(6);
}