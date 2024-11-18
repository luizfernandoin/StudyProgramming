export const createUserValidationSchema = {
    username: {
        isLength: {
            options: {
                min: 5,
                max: 32
            },
            errorMessage: "O username deve ter entre 5 e 32 caracteres!"
        },
        notEmpty: {
            errorMessage: "Username não pode ser vazio."
        },
        isString: {
            errorMessage: "Username deve ser uma string"
        }
    },
};

export const filterUserValidationSchema = {
    filter: {
        in: ['query'],
        isString: {
            errorMessage: "O filtro deve ser String"
        },
        notEmpty: {
            errorMessage: "O filtro não pode ser vazio"
        }
    },
    value: {
        in: ['query'],
        isString: {
            errorMessage: "O valor deve ser String"
        },
        notEmpty: {
            errorMessage: "O valor não pode ser vazio"
        },
    },
};