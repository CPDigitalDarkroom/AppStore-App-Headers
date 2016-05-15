/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFSModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, NSString;

@interface TFNTwitterPrompt : NSObject <TFSModel, NSCopying> {

	NSDictionary* _backingDictionary;
	char _invisible;
	NSNumber* _promptId;
	NSString* _actionText;
	NSString* _actionURL;
	NSString* _header;
	NSString* _format;
	NSString* _trigger;
	NSString* _text;
	NSString* _icon;
	NSString* _backgroundImageURL;
	NSString* _template;
	NSDictionary* _extraAttributes;
	double _persistence;

}

@property (nonatomic,readonly) NSNumber * promptId;                         //@synthesize promptId=_promptId - In the implementation block
@property (nonatomic,readonly) NSString * actionText;                       //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,readonly) NSString * actionURL;                        //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,readonly) NSString * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) NSString * format;                           //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * icon;                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * tooltipTarget; 
@property (nonatomic,readonly) double persistence;                          //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) NSString * backgroundImageURL;               //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (nonatomic,readonly) NSString * template;                         //@synthesize template=_template - In the implementation block
@property (nonatomic,readonly) char invisible;                              //@synthesize invisible=_invisible - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraAttributes;              //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,readonly) NSNumber * statusId; 
@property (nonatomic,readonly) NSNumber * insertionIndex; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)promptWithJSONData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)tooltipTarget;
-(NSNumber *)promptId;
-(char)invisible;
-(NSString *)actionURL;
-(NSString *)actionText;
-(NSDictionary *)jsonDictionary;
-(NSNumber *)statusId;
-(id)initWithPromptId:(id)arg1 actionURL:(id)arg2 format:(id)arg3 trigger:(id)arg4 header:(id)arg5 icon:(id)arg6 text:(id)arg7 actionText:(id)arg8 persistence:(double)arg9 backgroundImageURL:(id)arg10 template:(id)arg11 invisible:(char)arg12 extraAttributes:(id)arg13 ;
-(NSNumber *)insertionIndex;
-(NSDictionary *)extraAttributes;
-(NSString *)format;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSString *)icon;
-(NSString *)template;
-(NSString *)header;
-(NSString *)trigger;
-(double)persistence;
-(NSString *)backgroundImageURL;
@end

