#import "ClassATest.h"
/**
 * @brief brief description for an atom class
 * @remark  remark for atom class
 * @discussion discussion for atom class
 */
@interface AtomClassTest (Private)
	/**
 	* @brief The App Service Identifier name.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	*/
	@property(nonatomic, readonly, copy, nonnull) 
			NSString* property1Category;

	/**
 	* @brief Create an instance.
 	* @remark  remark for atom class
    * @discussion discussionsssssss
 	* @param request parameter request for this method
 	* @param appServiceName parameter appServiceName for this method
 	* @param appIdentifier parameter appIdentifier for this method
 	* @return return instancetype
 	*/
	- (nullable instancetype) method1Category:(nonnull ClassA*)request
                                    appServiceName:(nonnull NSString*)appServiceName
                                     appIdentifier:(nonnull NSString*)appIdentifier;
@end