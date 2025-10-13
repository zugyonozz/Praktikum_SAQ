#include <iostream>
using namespace std;

class Worker{
	private:
		string name; // anggota dari kelas Worker
		int salary; // anggota dari kelas Worker

	public:
		Worker() : name(""), salary(0) {} // kontrukter
		Worker(string name, float salary) {
			this->name = name;
			this->salary = salary;
		}

		void setName(string name){
			this->name = name;
		}

		void setSalary(int salary){
			this->salary = salary;
		}

		string getName(){
			return name;
		}

		int getSalary(){
			return salary;
		}
};

int main(){
	Worker w = {"Rafi Indra Pramudhito Zuhayr", 100000};

	cout << "Nama\t\t: " << w.getName() << endl;
	cout << "Gaji\t\t: " << w.getSalary() << endl;

	return 0;
}