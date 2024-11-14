

const userLeft = false;
const userWatchingCatMeme = true;

function watchTutorialCallback(calback, errorCallback) {
    if (userLeft) {
        errorCallback({
            name: 'User Left',
            message: ':('
        })
    } else if (userWatchingCatMeme) {
        errorCallback({
            name: 'User Watching Cat Meme',
            message: 'WebDevSimplified < Cat'
        })
    } else {
        calback('Thumbs up and Subscribe')
    }
}

watchTutorialCallback((message) => {
    console.log('Sucess: ' + message)
}, (error) => {
    console.log(error.name + ' ' + error.message)
})