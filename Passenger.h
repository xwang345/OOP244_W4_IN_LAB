// TODO: add header file guard here 
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H

// TODO: declare your namespace here
namespace sict {
	// TODO: define the Passenger class here
	class Passenger {
		private:
			char m_name[32];
			char m_destination[32];
		public:
			Passenger();
			Passenger(const char *PassengerName, const char* PassengerDestination);
			bool isEmpty() const;
			void display() const;
	};
}

#endif // !SICT_PASSENGER_H_
