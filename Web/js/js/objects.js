// object literals

let user = {
  name: 'crystal',
  age: 30,
  email: 'crystal@thenetninja.co.uk',
  location: 'berlin',
  blogs: ['why mac and cheese rules', '10 things to make with marmite'],
  login: function() {
    console.log('the user logged in')
  },
  logout() {
    console.log('the user logged out')
  },
  logBlogs() {
    /* console.log(this.blogs) */
    console.log('this user has written the following blogs')
    this.blogs.forEach((blog) => {
      console.log(blog)
    })
    /* this.blogs */
  },
}

console.log(user.name)
user.age = 35
console.log(user.age)
console.log(user['name'])
console.log(user['email'])
user['name'] = 'chun-li'
console.log(user['name'])
console.log(user['blogs'][0])
console.log(user['blogs'][1])
console.log(typeof user)

// Adding Methods
user.login()
user.logout()
const name = 'mario'
name.toUpperCase()

user.logBlogs()

/* console.log(this) */
