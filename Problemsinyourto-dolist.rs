use std::io::{self, Read};

fn main() {
    let mut buffer = String::new();
    io::stdin().read_to_string(&mut buffer).unwrap();
    let mut scanner = buffer.split_whitespace();

    let t: usize = scanner.next().unwrap().parse().unwrap();

    for _ in 0..t {
        let n: usize = scanner.next().unwrap().parse().unwrap();
        
        let count = (0..n)
            .map(|_| scanner.next().unwrap().parse::<u32>().unwrap())
            .filter(|&rating| rating >= 1000)
            .count();

        println!("{}", count);
    }
}