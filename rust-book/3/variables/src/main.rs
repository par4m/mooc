fn main() {
    let tup: (i32, f64, u8) = (500, 6.4, 1);
    println!("{}", tup.0);
    println!("{}", tup.1);
    println!("{}", tup.2);

    // Destructuring :: get invdividual values from the tuple
    let (x, y, z) = tup;
    println!("{x}");
    println!("{y}");
    println!("{z}");

    // another way to destructure
    let five_hundred = tup.0;
    let six_point_four = tup.1;
    let one = tup.2;

    println!("{ }", five_hundred);
    println!("{}", six_point_four);
    println!("{}", one);
}
