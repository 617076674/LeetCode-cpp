class ParkingSystem {
private:
    int big_;
    int medium_;
    int small_;
public:
    ParkingSystem(int big, int medium, int small) {
        big_ = big;
        medium_ = medium;
        small_ = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
            if (big_ == 0) {
                return false;
            }
            big_--;
            return true;
        }
        if (carType == 2) {
            if (medium_ == 0) {
                return false;
            }
            medium_--;
            return true;
        }
        if (small_ == 0) {
            return false;
        }
        small_--;
        return true;
    }
};