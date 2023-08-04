public class Main {
    public static void main(String[] args) {
        Student param = new Student("param", 17, 100); // constructor
        System.out.println(param.rno);
        System.out.println(param.name);
        System.out.println(param.marks);
        param.Greeting();
        param.changeName("null");
    }

}

// creating a class
// for every single student
class Student {
    int rno = 0;
    String name = "no";
    float marks = 1.0f;

    void Greeting() {
        System.out.println("Hello My Name is " + name);
    }

    void changeName(String newName) {
        this.name = newName;
    }

    Student(String name, int rno, float marks) {
        this.name = name;
        this.rno = rno;
        this.marks = marks;
    }
}