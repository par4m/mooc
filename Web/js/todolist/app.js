const addForm = document.querySelector('.add')
const list = document.querySelector('.todos')
const searchBar = document.querySelector('.search input')

const generateTemplate = (todo) => {
  const html = `

        <li
          class="list-group-item d-flex justify-content-between align-items-center">
          <span>${todo}</span>
          <i class="far fa-trash-alt delete"></i>
        </li>
    `
  list.innerHTML += html
}

addForm.onsubmit = (e) => {
  e.preventDefault()
  const todo = addForm.add.value.trim()
  if (todo.length) {
    generateTemplate(todo)
    addForm.reset()
  }
}

// delete todos

list.onclick = (e) => {
  if (e.target.classList.contains('delete')) {
    e.target.parentElement.remove()
  }
}

// searching and filtering
const filterTodos = (term) => {
  Array.from(list.children)
    .filter((todo) => {
      return !todo.textContent.toLowerCase().includes(term)
    })
    .forEach((todo) => {
      todo.classList.add('filtered')
    })

  Array.from(list.children)
    .filter((todo) => {
      return todo.textContent.toLowerCase().includes(term)
    })
    .forEach((todo) => {
      todo.classList.remove('filtered')
    })
}
searchBar.oninput = (e) => {
  const term = searchBar.value.trim().toLowerCase()
  filterTodos(term)
}
