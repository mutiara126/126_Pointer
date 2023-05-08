#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main() {
    mahasiswa mhs{1};           //object mhs 
    mhs.showNim();             //Member Access Operator

    mahasiswa& refmhs = mhs;   //Pointer Reference refMhs
    refmhs.nim = 2;            //Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer dereference refMHs
    pMhs->nim = 3;                //Arrow Operator
    mhs.showNim();
    return 0;


};

int main()
{
    std::cout << "Hello World!\n";
}

