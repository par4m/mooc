class User {
  constructor(username, email) {
    //
    this.username = username
    this.email = email
    this.score = 0
  }
}

User.prototype.login = function () {
  console.log(`${this.username} just logged in`)
  return this
}

User.prototype.logout = function () {
  console.log(`${this.username} just logged out`)
  return this
}

User.prototype.incScore = function () {
  this.score += 1
  console.log(`${this.username} has a score of ${this.score}`)
  return this
}

class Admin extends User {
  constructor(username, email, title) {
    super(username, email)
    this.title = title
  }
}

Admin.prototype = Object.create(User.prototype)

Admin.prototype.deleteUser = function (user) {
  users = users.filter((u) => {
    return u.username !== user.username
  })
}
const userOne = new User('param', 'mario@thenetninja.co.uk')
const userTwo = new User('anish', 'anish@thenetninja.co.uk')
const userThree = new Admin('Uday', 'uday@captain.com')

/* console.log(userOne.incScore()) */
/* console.log(userOne.logout()) */
console.log(Admin.prototype)
