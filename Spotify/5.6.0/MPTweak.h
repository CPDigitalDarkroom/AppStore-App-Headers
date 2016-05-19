/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSString;

@interface MPTweak : NSObject {

	NSHashTable* _observers;
	NSString* _name;
	NSString* _encoding;
	id _defaultValue;
	id _currentValue;
	id _minimumValue;
	id _maximumValue;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * encoding;              //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,retain) id defaultValue;                         //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) id currentValue;                         //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,retain) id minimumValue;                         //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) id maximumValue;                         //@synthesize maximumValue=_maximumValue - In the implementation block
-(id)initWithName:(id)arg1 andEncoding:(id)arg2 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)minimumValue;
-(id)maximumValue;
-(void)setMinimumValue:(id)arg1 ;
-(void)setMaximumValue:(id)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(NSString *)encoding;
@end

