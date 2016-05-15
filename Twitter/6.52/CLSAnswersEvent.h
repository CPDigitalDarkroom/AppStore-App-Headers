/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface CLSAnswersEvent : NSObject {

	NSString* _key;
	NSDictionary* _customAttributes;
	NSMutableDictionary* _predefinedAttributes;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customAttributes;                         //@synthesize customAttributes=_customAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * predefinedAttributes;              //@synthesize predefinedAttributes=_predefinedAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
+(id)filterCustomAttributes:(id)arg1 ;
+(void)addAttribute:(id)arg1 forKey:(id)arg2 toDictionaryByValidating:(id)arg3 ;
+(char)validAttributeValue:(id)arg1 ;
+(id)truncateAttribute:(id)arg1 ;
-(NSMutableDictionary *)predefinedAttributes;
-(id)initWithKey:(id)arg1 metadataDictionary:(id)arg2 customAttributes:(id)arg3 ;
-(NSDictionary *)customAttributes;
-(NSString *)key;
-(NSDictionary *)metadata;
-(id)payloadDictionary;
@end

