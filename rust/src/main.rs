use std::io::{stdin, stdout, Write};

fn main() {
    print!("Please enter your name: ");
    let _ = stdout().flush();
    let mut buf = String::new();

    stdin().read_line(&mut buf).unwrap();
    let name = buf.trim_matches('\n').trim_matches('\r');
    println!();
    println!("If you read this, you lost the Game.");
    println!("Hello! My name is {name}. I just lost the game. Incredible. yuh")
}
