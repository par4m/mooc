const products = [
  { name: 'gold star', price: 30 },
  { name: 'green shell', price: 10 },
  { name: 'red shell', price: 40 },
  { name: 'banana skin', price: 5 },
  { name: 'mushroom', price: 50 },
]

// filter: price > 20
const filtered = products.filter((product) => product.price > 20)

// map filtered array

const promos = filtered.map((product) => {
  return `the ${product.name} is ${product.price / 2} pounds`
})

console.log(promos)

// by chaining

const pro = products
  .filter((product) => product.price > 20)
  .map((product) => {
    return `the ${product.name} is ${product.price / 2} pounds`
  })
console.log(pro)
