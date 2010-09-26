//
//  GBParagraphItem.h
//  appledoc
//
//  Created by Tomaz Kragelj on 30.8.10.
//  Copyright (C) 2010, Gentle Bytes. All rights reserved.
//

#import <Foundation/Foundation.h>

/** Defines the base functionality for all paragraph items. 
 */
@interface GBParagraphItem : NSObject

///---------------------------------------------------------------------------------------
/// @name Initialization & disposal
///---------------------------------------------------------------------------------------

/** Returns new autoreleased instance. */
+ (id)paragraphItem;

/** Returns new autoreleased instance with `stringValue` set to the given text.
 
 This is equivalent to the following code:
 
	GBParagraphItem *item = [GBParagraphItem paragraphItem];
	item.stringValue = value;
 
 @param value The string value of the item.
 @return Returns initialized value.
 */
+ (id)paragraphItemWithStringValue:(NSString *)value;

///---------------------------------------------------------------------------------------
/// @name Values
///---------------------------------------------------------------------------------------

/** Item's string value.
 
 This is mainly used for debugging and unit tests.
 */
@property (copy) NSString *stringValue;

///---------------------------------------------------------------------------------------
/// @name Debugging aids
///---------------------------------------------------------------------------------------

/** String value as used in debug description.
 
 By default this returns string value trimmed to some maximum chars, but subclasses can override to provide their specific implementation. This is only used for debugging purposes and should not be used for any output generation! See `description` method implementation for details.
 
 Sending this message is equivalent to sending `descriptionForStringValue:` to receiver and passing it `stringValue` as the parameter.
 
 @see descriptionStringValueFromValue:
 */
@property (readonly) NSString *descriptionStringValue;

@end