/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <TFNUI/TFNPlistSerialization.h>

@class NSString;

@interface TFNTwitterPromotedContext : NSObject <NSCoding, TFNPlistSerialization> {

	NSString* _impressionID;
	unsigned _animations;

}

@property (nonatomic,readonly) NSString * impressionID;              //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,readonly) unsigned animations;                  //@synthesize animations=_animations - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)impressionID;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)animations;
@end

