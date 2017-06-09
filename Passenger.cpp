// Created by Xiaochen Wang
// TODO: add your headers here 
#include <iostream>
#include<cstring>
#include "Passenger.h"

using namespace std;
// TODO: continue your namespace here
namespace sict {
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		*m_name = '\0';
		*m_destination = '\0';
	}

	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char *name, const char* destination) {
		if (name == '\0' || destination == '\0' ){
			*m_name = '\0';
			*m_destination = '\0';
		}else if(name == nullptr && destination == nullptr){
			*m_name = '\0';
			*m_destination = '\0';
		} else {
			strcpy(m_name, name);
			strcpy(m_destination, destination);
		}
	}

	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		bool TF;
		if (*m_name == '\0' || *m_destination == '\0' || m_destination == nullptr || m_name == nullptr) {
			TF = true;
		} else {
			TF = false;
		}
		return TF;
	}

	// TODO: implement display query here
	void Passenger::display() const {
		cout << m_name << " - " << m_destination << endl;
	}
}
    




