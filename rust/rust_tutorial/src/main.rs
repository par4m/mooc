#![allow(unused)]

use std::io;
use rand::Rng;
use std::io::{Write, BufReader, BufRead, ErrorKind};
use std::fs::File;
use std::cmp::Ordering;



// Functions


fn sum_list(list: &[i32]) -> i32 {
 let mut sum =0;
 for &val in list.iter() {
    sum += &val;
 }
 return sum
}

fn get_sum_2(x: i32,y: i32) -> i32 {
    return x + y
}


fn get_sum_1(x: i32) -> (i32,i32) {
    return (x+1, x+2)
}

fn say_hello() {
    println!("Hello");
}

fn main() {
    println!("What is ur name ");
    let mut name = String::new();
    let greeting = "Nice to meet you";

    io::stdin().read_line(&mut name).expect("Didn't Receive Input");
    println!("{} + {}",greeting,name.trim_end());

    const ONE_MIL : u32 = 1_000_000;
    const PI : f32 = 3.141592;
    let age : &str = "47";
    let mut age : u32 = age.trim().parse().expect("age wasnt assinged a number");

    age = age + 1;
    println!("Iam {} and I want ${}",age,ONE_MIL);

    // Unsinged Integers : u8, u16, u32, u64, u128, usize
    // Signed integers : i8, i16, i32, i64, isize

    println!("Max u32 :  {}", u32::MAX);
    println!("Max u64:  {}", u64::MAX);
    println!("Max usize :  {}", usize::MAX);
    println!("Max u128 :  {}", u128::MAX);
    println!("Max f32 :  {}", f32::MAX);
    println!("Max f64 :  {}", f64::MAX);


    // Booleans

    let is_true = true;
    let my_grade = 'A'; // single quotes for chars


    // Floating ppint precision

    let num_1 : f32 = 1.11111111111111;
    println!("f32 : {}",num_1 + 0.11111111111111);

    let num_2 : f64 = 1.11111111111111;
    println!("f64 : {}",num_2 + 0.11111111111111);


    // Arithmetic 
    let mut num_3 : u32 = 5;

    let num_4 : u32 = 4;
    println!("5 + 4 = {}",num_3 + num_4);
    println!("5 - 4 = {}",num_3 - num_4);
    println!("5 * 4 = {}",num_3 * num_4);
    println!("5 / 4 = {}",num_3 / num_4);
    println!("5 % 4 = {}",num_3 % num_4);
    num_3 += 1;

    // Random values

    let random_num  = rand::thread_rng().gen_range(1..101);
    println!("Random value is : {}",random_num);

    // Conditionals

    let age : i32 = 8;

    if(age >=1) && (age <= 18) {
        println!("Important Birthday");
    } 
    else if(age == 21 ) || (age == 50) {
        println!("Important Birthday");
    }
    else if age >= 65 {
        println!("Important Birthday");
    }
    else {
        println!("Not Important Birthday");
    }

    let mut my_age = 47;
    let can_vote = if my_age >=18 {
        true
    } else {
        false
    };
    println!("Can vote {}",can_vote);

    let age2 = 8;
    match age2 {
        1..=18 => println!("Important Birtjday"),
        21 | 50 => println!("Imporatnt Birthday"),
        65..=i32::MAX => println!("Important Birthday"),
        _ => println!("Not an imporatnt birtjday"),
    };

    let my_age = 18;
    let voting_age = 18;
    match my_age.cmp(&voting_age) {
        Ordering::Less => println!("Cant vote"),
        Ordering::Greater => println!("Can Vote"),
        Ordering::Equal => println!("U gained the right to vote"),
    };

    // Arrays :: fixed size :: same type

    let arr_1 : [i32; 9] = [1,2,3,4,5,6,7,8,9];
    println!("1st : {}", arr_1[0]);
    println!("Length : {}", arr_1.len());

    // loop through
    let mut loop_index = 0;
    loop {
        if arr_1[loop_index] % 2 == 0 {
            println!("");
            loop_index+=1;
        }
        if arr_1[loop_index] == 9 {
            break;
        }
        println!("Val: {}", arr_1[loop_index]);
        loop_index += 1;
    }

    while loop_index < arr_1.len() {
        println!("Arr: {}", arr_1[loop_index]);
        loop_index+=1;    
    }

 // for loop
    for val in arr_1.iter() {
        println!("Val: {}",val);
    }


// tuple
let my_tuple : (u8, String , f64) = (47,"param".to_string(), 50_000.00);
println!("Name: {}", my_tuple.1);
// assign vars from tuple
let (v1,v2,v3 ) = my_tuple;
println!("Age : {}", v1);


// Strings
let mut st1 = String::new();
st1.push('A');
st1.push_str(" word");
for word in st1.split_whitespace() {
    println!("{}",word);
}
let st2 = st1.replace("A", "Another");
println!("{}", st2);

let st3 = String::from("x r t b h k k a m c ");
let mut v1: Vec<char> = st3.chars().collect();
v1.sort();
v1.dedup();
for char in v1 {
    println!("{}",char);
}
let st4: &str = "Random String";
let mut st5: String = st4.to_string();
println!("{}",st5);
let byte_arr1 = st5.as_bytes();
let st6 = &st5[0..6];
println!("String length : {}", st6.len());
st5.clear();
let st6 = String::from("Just some");
let st7 = String::from(" words");
// st6 wont exist but st7 will cuz a reference to st7 was given
let st8 = st6 + &st7;
for w in st8.bytes() {
    println!("{}",w);
}


// Casting
let int_u8: u8 = 5;
let int2_u8 : u8 = 4;
let int3_u32 : u32 = (int_u8 as u32) + (int2_u8 as u32);

// Enums 
enum Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday ,
    Saturday,
    Sunday
}

impl Days {
    fn is_weekend(&self) -> bool {
        match self  {
            Days::Saturday | Days :: Sunday => true,
            _ => false
            
        }
    }
}

let today:Days = Days::Monday;
match today {
    Days::Monday => println!("Everyone hates monday"),
    Days::Tuesday => println!("Everyone hates tuesday"),
    Days::Wednesday => println!("wedding day"),
    Days::Thursday => println!("Pay day"),
    Days::Friday => println!("Almost weekend"),
    Days::Saturday => println!("weekend"),
    Days::Sunday => println!("Weekend")
}
println!("Is today the weekend {} ", today.is_weekend());


// Vectors :: dynamic arrays

let vec1 : Vec<i32> = Vec::new();
let mut vec2 = vec![1,2,3,4];
vec2.push(5);
println!("1st : {} ", vec2[0]);
let second : &i32 = &vec2[1];

match vec2.get(1) {
    Some(second) => println!("2dnd : {}", second),
    None => println!("No second value"),
}

for i in &mut vec2 {
    *i *= 2;
}
for i in &vec2 {
    println!("{}",i);
}

println!("Vector length {}", vec2.len());
println!("Pop: {:?}", vec2.pop());
// println!("Pop: {}", vec2.pop()); // wont work
  

// Functions
say_hello();
println!("{}", get_sum_2(4, 5));

let (val_1, val_2) = get_sum_1(4);
println!("Val 1 : {}  , Val 2 : {}",val_1,val_2);

let num_list = vec![1,2,3,4,5];
println!("Sum of list = {}", sum_list(&num_list));


// Generics

}
