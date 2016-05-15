/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TFNUI/TFNPlistSerialization.h>

@class NSArray, TFNTwitterEntityMediaVideoVariant, NSString;

@interface TFNTwitterEntityMediaVideoInfo : NSObject <NSCoding, NSCopying, TFNPlistSerialization> {

	float _aspectRatio;
	NSArray* _variants;
	double _duration;

}

@property (nonatomic,readonly) TFNTwitterEntityMediaVideoVariant * preferredVariant; 
@property (nonatomic,readonly) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float aspectRatio;                                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) NSArray * variants;                                                //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) NSString * primaryUrl; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_contentTypeOrder;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSString *)primaryUrl;
-(void)_parseVariants:(id)arg1 ;
-(float)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TFNTwitterEntityMediaVideoVariant *)preferredVariant;
-(NSArray *)variants;
@end

