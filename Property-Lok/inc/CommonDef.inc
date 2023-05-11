				Common: {
					bsonType:"object",
					required: ["Created", "CreatedBy", "Updated", "UpdatedBy", "Active"],
                    properties:{
						"Created": {
							"bsonType": "string",
							"description": "required"
						},
						"CreatedBy": {
							"bsonType": "string",
							"description": "required"
						},
						"Updated": {
							"bsonType": "string",
							"description": "required"
						},
						"UpdatedBy": {
							"bsonType": "string",
							"description": "required"
						},
						"Active": {
							"bsonType": "bool",
							"description": "Defaulted to TRUE"
						},
						"Notes": {
							"bsonType": "string",
							"maxLength": 512,
							"description": "Free-form text"
						}
					}
				}
