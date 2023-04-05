const key = 'SVEZgxiXKMajoGJIuyy2iYH44unVwQsj'

const getCity = async (city) => {
  const base = 'http://dataservice.accuweather.com/locations/v1/cities/search'
  const query = `?apikey=${key}&q=${city}`

  const response = await fetch(base + query)
  const data = await response.json()
  return data[0]
}

// use key from city details for Weather API call
const getWeather = async (locationKey) => {
  const base = `http://dataservice.accuweather.com/currentconditions/v1/${locationKey}`
  const query = `?apikey=${key}`

  const response = await fetch(base + query)
  const data = await response.json()
  return data[0]
}

// get City Details to get Key then use that Key for Weather API
getCity('delhi')
  .then((data) => {
    return getWeather(data.Key)
  })
  .then((data) => {
    console.log(data)
  })
  .catch((err) => console.log(err))

/* getWeather(202396) */
/*   .then((data) => console.log(data)) */
/*   .catch((err) => console.log(err)) */
