#include <iostream>
#include <string>
using namespace std;

// definition of the Student struct
struct Mahasiswa {
    string name;
    float grade[3];
};

// function to input student data
void inputData(Mahasiswa &mhs) {
	string matkul[] = {"Biology    ","Physics    ","Mathematics"};
	cout << "========================================================================" << endl;
    cout << "                            Student Input                               " << endl;
    cout << "========================================================================" << endl;
    cout << "- Enter Student Name                   : ";
    getline(cin, mhs.name);
    
    for (int i = 0; i < 3; i++){
        cout <<"  " << (i+1) << ".Enter The Course Grade " << matkul[i] << " : ";
        cin >> mhs.grade[i];
    }
    system("cls");
}


// function to display student data
void displayData(Mahasiswa &mhs) {
    cout << "\t" << mhs.name << "\t\t"<< mhs.grade[0] << "\t\t " << mhs.grade[1] 
	<< "\t\t " << mhs.grade[2] << "\t\t    " << (mhs.grade[0]+mhs.grade[1]+mhs.grade[2])/3 << endl;
}

// function tamnel created
void chanel(){
	cout << "Created By @damar.glh__ . " << endl;
}

// function change color
void intro(){
     system("color 07");
}


int main() {
    const int n = 3;
    // initialize the Student array by 3
    Mahasiswa mhs[n];
    
    intro();

    // input data for 3 students
    for (int i = 0; i < n; i++) {
        cout << "Enter Student Data Into - " << i+1 << endl;
        inputData(mhs[i]);
        cin.ignore(); // to clear the input buffer
    }

    system("cls");
	// displays data for 3 students
    cout << "======================================================================================" << endl;
    cout << "                                 Student Data                                    " << endl;
    cout << "======================================================================================" << endl;
    cout << "       Name           Biology          Physics       Mathematics       Average value  " << endl;
    cout << "======================================================================================" << endl;
    for (int i = 0; i < n; i++) {
        displayData(mhs[i]);
        cout << endl;
    }
    cout << "======================================================================================" << endl;
    chanel();
    return 0;
}

