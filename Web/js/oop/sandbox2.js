class User {
  constructor(username, email) {
    //
    this.username = username
    this.email = email
    this.score = 0
  }
  login() {
    console.log(`${this.username} just logged in`)
    return this
  }
  logout() {
    console.log(`${this.username} just logged out`)
    return this
  }
  incScore() {
    this.score += 1
    console.log(`${this.username} has a score of ${this.score}`)
    return this
  }
}

const userOne = new User('param', 'mario@thenetninja.co.uk')
const userTwo = new User('anish', 'anish@thenetninja.co.uk')

console.log(userOne, userTwo)

userOne.login().incScore().incScore().logout()
