/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSSet, NSDictionary;

@interface T1CommerceAttributeItem : NSObject {

	NSString* _name;
	NSArray* _values;
	/*^block*/id _updateAction;
	NSString* _selectedValue;
	NSSet* _enabledValues;
	NSDictionary* _skuIdToPriceDict;
	unsigned _productType;

}

@property (nonatomic,retain) NSSet * enabledValues;                          //@synthesize enabledValues=_enabledValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * skuIdToPriceDict;              //@synthesize skuIdToPriceDict=_skuIdToPriceDict - In the implementation block
@property (nonatomic,readonly) unsigned productType;                         //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) id updateAction;                                  //@synthesize updateAction=_updateAction - In the implementation block
@property (nonatomic,retain) NSString * selectedValue;                       //@synthesize selectedValue=_selectedValue - In the implementation block
+(id)tfn_defaultDataViewAdapter;
-(id)initWithName:(id)arg1 values:(id)arg2 enabledValues:(id)arg3 selectedValue:(id)arg4 updateAction:(/*^block*/id)arg5 ;
-(id)initWithName:(id)arg1 values:(id)arg2 enabledValues:(id)arg3 selectedValue:(id)arg4 updateAction:(/*^block*/id)arg5 skuIdToPriceDict:(id)arg6 productType:(unsigned)arg7 ;
-(NSString *)selectedValue;
-(void)setSelectedValue:(NSString *)arg1 ;
-(NSSet *)enabledValues;
-(void)setEnabledValues:(NSSet *)arg1 ;
-(NSDictionary *)skuIdToPriceDict;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)updateAction;
-(unsigned)productType;
-(void)setUpdateAction:(id)arg1 ;
@end

