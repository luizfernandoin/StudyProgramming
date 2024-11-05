const axiosRequest = require('axios');

async function getImages(url) {
    let response = await axiosRequest.get(url)
    const data = response.data;
    const images = data.map(product => product.image_link);
    console.log(images);
};

getImages(url);