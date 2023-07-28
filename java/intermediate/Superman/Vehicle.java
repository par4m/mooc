package Superman;

public class Vehicle {
        int maxSpeed;
        Vehicle() {
            System.out.println("Vehicle Constructor");
        }
        Vehicle(int maxSpeed){
            System.out.println("Vehicle constructor w/ speed");
            this.maxSpeed = maxSpeed;
        }
}

class Car extends Vehicle {
    // constructor   
    Car() {
        super();
        System.out.println("Car Constructor");
    }
}

