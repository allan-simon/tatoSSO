

# where the application code will be generated
# relative to the "tools" directory
APP_ROOT = "../app"

# this represent the logical structure of your code
# the script init will use this to generate a skeleton
# of code
ARCHITECTURE = {
    'controllers' : {
        'Users' : {
            'description': 'module to centralize user related actions',
            'methods' : {
                'show_all': {}
            },
            'forms' : {
                'register_new' : {},
                'login' : {}
            },
            'actions_only' : {
                'logout': {},
                'delete_by_id': {}
            }
        },
        'Tokens' : {
            'description': 'module to centralize action related to token grated to user on services',
            'methods' : {
                'check_token': {}
            },
            'forms': {
                'external_login' : {}
            },
            'actions_only' : {
                'kick_user': {}
            }

        },
        'Admins' : {
            'description': 'module to centralize administrator actions',
            'forms' : {
                'reset_password': {}
            }
        }
    },

    'models': {
        'Tokens' : {},
        'Tickets' : {}
    },

    'models_controllers': [
        ('Tickets','Users'),
        ('Tokens','Tokens'),
        ('Tickets','Tokens'),
    ]

}


# placeholders, replace the value by those specific to your
# project
REPLACEMENTS = {
    '@AUTHOR@' : 'Allan SIMON',
    '@EMAIL@': 'allan.simon@supinfo.com',
    '@PROJECT_NAME_CODE@' : 'TatoSSO',
    '@PROJECT_NAME_HUMAN@': 'TatoSSO',
    '@PROJECT_NS@': 'tatosso',
    '@MAIN_CLASS@' : 'TatoSSO',
    '@MAIN_CLASS_HEADER@' : 'TATO_SSO',
    '@DESCRIPTION@' : 'Single Sign On (SSO) system',
    '@PROJECT_WEBSITE' : 'https://github.com/allan-simon/tatosso',
    '@YEARS@' : '2014',
    '    ' : '    ' #your prefered indentation, replace the second one
}

