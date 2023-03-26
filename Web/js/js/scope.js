let age = 30

if (true) {
  let age = 40
  let name = 'shaun'
  console.log('inside 1st code block: ', age, name)

  if (true) {
    console.log('inside the 2nd code block: ', age)
  }
}

console.log('Outside the code block ', age, name)
