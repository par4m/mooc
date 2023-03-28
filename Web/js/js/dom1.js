const para = document.querySelector('p')
const p = document.querySelector('.error')
const pa = document.querySelector('div.error')
const h = document.querySelector('body > h1')
console.log(para)
console.log(p)
console.log(pa)
console.log(h)

const paras = document.querySelectorAll('p')
console.log(paras)
/* console.log(paras[0]) */

paras.forEach((para) => {
  console.log(para)
})

const errors = document.querySelectorAll('.error')
errors.forEach((err) => {
  console.log(err)
})
