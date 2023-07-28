package Learn;

public class Student {
    int StudentId;
    String name;

    Student(int StudentId, String name) {
        this.StudentId = StudentId;
        this.name = name;
    }
    public String toString() {
        return StudentId + " " + name;
    }
}
