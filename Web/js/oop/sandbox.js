const userOne = {
  username: 'ryu',
  email: 'ryu@thenetninja.co.uk',
  login() {
    console.log('the user logged in')
  },
  logout() {
    console.log('the user logged out')
  },
}

console.log(userOne.email, userOne.username)
userOne.login()

/* const userThree = new User('shaun@thenetninja.co.uk', 'shaun') */

/* class User { */
/*   constructor() { */
/*     // */
/*     this.username = 'mario' */
/*   } */
/* } */
/**/
/* const UserOne = new User() */
