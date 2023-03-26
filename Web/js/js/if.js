// if-else
const age = 25

if (age > 20) {
  console.log('you are over 20 years old ')
}

const ninjas = ['shaun', 'ryu', 'chun-li', 'yoshi']

if (ninjas.length > 4) {
  console.log("there's a lot of ninjas ")
}

/* const password = 'pass' */
/**/
/* if (password.length >= 8) { */
/*   console.log('the password is long enough!') */
/* } */

// else if statements
const password = 'p@ssword123456'

if (password.length >= 12) {
  console.log('that password is mighty strong')
} else if (password.length >= 8) {
  console.log('that password is long enough')
} else {
  console.log('password should be at least 8 characters long')
}
