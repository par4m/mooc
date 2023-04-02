const scores = [10, 30, 15, 25, 50, 40, 5]
const newArray = scores.filter((score) => {
  return score > 20
})

console.log(scores)
console.log(newArray)

const users = [
  { name: 'shaun', premium: true },
  { name: 'yoshi', premium: false },
  { name: 'mario', premium: false },
  { name: 'chun-li', premium: true },
]

const Premium = users.filter((user) => {
  return user.premium
})

console.log(Premium)

// Map

const prices = [20, 10, 30, 25, 15, 40, 80, 5]

const salePrices = prices.map((price) => price / 2)

console.log(salePrices)
console.log(prices)

const products = [
  { name: 'gold star', price: 20 },
  { name: 'mushroom', price: 40 },
  { name: 'green shells', price: 30 },
  { name: 'banana skin', price: 10 },
  { name: 'red shells', price: 50 },
]
const newProducts = products.map((product) => {
  if (product.price > 30) {
    return { name: product.name, price: product.price / 2 }
  } else {
    return product
  }
})

console.log(newProducts)
