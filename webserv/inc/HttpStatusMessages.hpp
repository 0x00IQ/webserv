#pragma once



/*
	1xx : Information
	2xx : Succès
	3xx : Redirection
	4xx : Erreur du client HTTP_MESSAGE
	5xx : Erreur du serveur / du serveur d'application
*/

// 1xx
#define HTTP_MESSAGE_CONTINUE                       		"CONTINUE"
#define HTTP_MESSAGE_SWITCH_PROTOCOL                		"SWITCH_PROTOCOL"
#define HTTP_MESSAGE_PROCESSING                     		"PROCESSING"
#define HTTP_MESSAGE_EARLY_HINTS                    		"EARLY_HINTS"

// 2xx
#define HTTP_MESSAGE_OK                             		"OK"
#define HTTP_MESSAGE_CREATED                        		"CREATED"
#define HTTP_MESSAGE_ACCEPTED                       		"ACCEPTED"
#define HTTP_MESSAGE_NON_AUHORITATIVE_INFORMATION   		"NON_AUHORITATIVE_INFORMATION"
#define HTTP_MESSAGE_NO_CONTENT                     		"NO_CONTENT"
#define HTTP_MESSAGE_RESET_CONTENT                  		"RESET_CONTENT"
#define HTTP_MESSAGE_PARTIAL_CONTENT                		"PARTIAL_CONTENT"
#define HTTP_MESSAGE_MULTI_STATUS                   		"MULTI_STATUS"
#define HTTP_MESSAGE_ALREADY_REPORTED               		"ALREADY_REPORTED"
#define HTTP_MESSAGE_CONTENT_DIFFERENT              		"CONTENT_DIFFERENT"
#define HTTP_MESSAGE_IM_USED                        		"IM_USED"

// 3xx
#define HTTP_MESSAGE_MULTIPLE_CHOICES						"MULTIPLE_CHOICES"
#define HTTP_MESSAGE_MOVED_PERMANENTLY						"MOVED_PERMANENTLY"
#define HTTP_MESSAGE_FOUND									"Found"
#define HTTP_MESSAGE_SEE_OTHER								"SEE_OTHER"
#define HTTP_MESSAGE_NOT_MODIFIED							"NOT_MODIFIED"
#define HTTP_MESSAGE_USE_PROXY								"USE_PROXY"
#define HTTP_MESSAGE_INUTILIZED								"INUTILIZED"
#define HTTP_MESSAGE_TEMPORARY_REDIRECT						"TEMPORARY_REDIRECT"
#define HTTP_MESSAGE_PERMANENT_REDIRECT						"PERMANENT_REDIRECT"
#define HTTP_MESSAGE_TOO_MANY_REDIRECTS						"TOO_MANY_REDIRECTS"

// 4xx
#define HTTP_MESSAGE_BAD_REQUEST							"BAD_REQUEST"
#define HTTP_MESSAGE_UNAUTHORIZED							"UNAUTHORIZED"
#define HTTP_MESSAGE_PAYMENT_REQUIRED						"PAYMENT_REQUIRED"
#define HTTP_MESSAGE_FORBIDDEN								"FORBIDDEN"
#define HTTP_MESSAGE_NOT_FOUND								"Not Found"
#define HTTP_MESSAGE_METHOD_NOT_ALLOWED						"METHOD_NOT_ALLOWED"
#define HTTP_MESSAGE_NOT_ACCEPTABLE							"NOT_ACCEPTABLE"
#define HTTP_MESSAGE_PROXY_AUTH_REQUIRED					"PROXY_AUTH_REQUIRED"
#define HTTP_MESSAGE_REQUEST_TIME_OUT						"REQUEST_TIME_OUT"
#define HTTP_MESSAGE_CONFLICT								"CONFLICT"
#define HTTP_MESSAGE_GONE									"GONE"
#define HTTP_MESSAGE_LENGTH_REQUIRED						"LENGTH_REQUIRED"
#define HTTP_MESSAGE_PRECONDITION_FAILED					"PRECONDITION_FAILED"
#define HTTP_MESSAGE_REQUEST_ENTITY_TOO_LARGE				"REQUEST_ENTITY_TOO_LARGE"
#define HTTP_MESSAGE_REQUEST_URI_TOO_LONG					"REQUEST_URI_TOO_LONG"
#define HTTP_MESSAGE_UNSUPPORTED_MEDIA_TYPE					"UNSUPPORTED_MEDIA_TYPE"
#define HTTP_MESSAGE_REQUEST_RANGE_UNSATISFIABLE			"REQUEST_RANGE_UNSATISFIABLE"
#define HTTP_MESSAGE_EXPECTATION_FAILED						"EXPECTATION_FAILED"
#define HTTP_MESSAGE_I_M_A_TEAPOT							"I_M_A_TEAPOT"
#define HTTP_MESSAGE_PAGE_EXPIRED							"PAGE_EXPIRED"
#define HTTP_MESSAGE_BAD_MAPPING							"BAD_MAPPING"
#define HTTP_MESSAGE_UNPROCESSABLE_ENTITY					"UNPROCESSABLE_ENTITY"
#define HTTP_MESSAGE_LOCKED									"LOCKED"
#define HTTP_MESSAGE_METHOD_FAILURE							"METHOD_FAILURE"
#define HTTP_MESSAGE_TOO_EARLY								"TOO_EARLY"
#define HTTP_MESSAGE_UPGRADE_REQUIRED						"UPGRADE_REQUIRED"
#define HTTP_MESSAGE_INVALID_DIGITAL_SIGNATURE				"INVALID_DIGITAL_SIGNATURE"
#define HTTP_MESSAGE_PRECONDITION_REQUIRED					"PRECONDITION_REQUIRED"
#define HTTP_MESSAGE_TOO_MANY_REQUEST						"TOO_MANY_REQUEST"
#define HTTP_MESSAGE_REQUEST_HEADER_FIELDS_TOO_LARGE		"REQUEST_HEADER_FIELDS_TOO_LARGE"
#define HTTP_MESSAGE_RETRY_WITH								"RETRY_WITH"
#define HTTP_MESSAGE_BLOCKED_BY_WINDOWS_PARENTAL_CONTROL	"BLOCKED_BY_WINDOWS_PARENTAL_CONTROL"
#define HTTP_MESSAGE_UNAVAILABLE_FOR_LEGAL_REASON			"UNAVAILABLE_FOR_LEGAL_REASON"
#define HTTP_MESSAGE_UNRECOVERABLE_ERROR					"UNRECOVERABLE_ERROR"


// 5xx
#define HTTP_MESSAGE_INTERNAL_SERVER_ERROR					"INTERNAL_SERVER_ERROR"
#define HTTP_MESSAGE_NOT_IMPLEMENTED						"NOT_IMPLEMENTED"
#define HTTP_MESSAGE_BAD_GATEWAY							"BAD_GATEWAY"
#define HTTP_MESSAGE_SERVICE_UNAVAILABLE					"SERVICE_UNAVAILABLE"
#define HTTP_MESSAGE_GATEWAY_TIME_OUT						"GATEWAY_TIME_OUT"
#define HTTP_MESSAGE_HTTP_MESSAGE_VERSION_NOT_SUPPORTED				"HTTP_MESSAGE_VERSION_NOT_SUPPORTED"
#define HTTP_MESSAGE_VARIANT_ALSO_NEGOTIATES				"VARIANT_ALSO_NEGOTIATES"
#define HTTP_MESSAGE_INSIFFICIENT_STORAGE					"INSIFFICIENT_STORAGE"
#define HTTP_MESSAGE_LOOP_DETECTED							"LOOP_DETECTED"
#define HTTP_MESSAGE_BANDWIDTH_LIMIT_EXCEEDED				"BANDWIDTH_LIMIT_EXCEEDED"
#define HTTP_MESSAGE_NOT_EXTENDED							"NOT_EXTENDED"
#define HTTP_MESSAGE_NETWORD_AUTH_REQUIRED					"NETWORD_AUTH_REQUIRED"